# New ports collection makefile for:	fonts-ttf-gost
# Date created:		2010-01-15
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	fonts-ttf-gost
PORTVERSION=	7.2
CATEGORIES=	x11-fonts
MASTER_SITES=	http://fbsd.zlonet.ru/distfiles/
DISTNAME=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	GOST TrueType fonts

RUN_DEPENDS=	fc-cache:${PORTSDIR}/x11-fonts/fontconfig

USE_BZIP2=	yes
NO_BUILD=	yes
FONTSDIR=	lib/X11/fonts/gost
PLIST_SUB+=	FONTSDIR=${FONTSDIR}

do-install:
	${MKDIR} ${PREFIX}/${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.ttf ${PREFIX}/${FONTSDIR}

post-install:
	${ECHO_MSG} "===> Running fc-cache"
	-${LOCALBASE}/bin/fc-cache -f -v ${FONTSDIR}
	${ECHO_MSG}
	${CAT} ${PKGMESSAGE}
	@${ECHO_MSG} "Standart GOST font. GOST 2.304-81"
	@${ECHO_MSG} "Pay attention to copyright issues before\
		any commercial use this fonts."
	@${ECHO_MSG} "Copyright (c) 1996-2005. ASCON. All Rights Reserved."

.include <bsd.port.mk>
