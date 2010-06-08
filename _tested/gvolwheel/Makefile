# New ports collection makefile for:	gvolwheel
# Date created:		2010-06-08
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	gvolwheel
PORTVERSION=	0.7
CATEGORIES=	audio
MASTER_SITES=	SF/${PORTNAME}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Volume mixer

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_ICONV=	yes

OPTIONS=	NLS "native language support" off

.include <bsd.port.pre.mk>

.if defined(WITHOUT_NLS)
CONFIGURE_ARGS+=	--disable-nls
USE_GETTEXT=	yes
PLIST_SUB+=	NLS="@comment "
.else
PLIST_SUB+=	NLS=""
.endif

.include <bsd.port.post.mk>
