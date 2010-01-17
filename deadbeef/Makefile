# New ports collection makefile for:	deadbeef
# Date created:		2010-01-17
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	deadbeef
PORTVERSION=	0.3.2
CATEGORIES=	audio
MASTER_SITES=	SF/${PORTNAME}/
DISTNAME=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	DeaDBeeF is an audio player for GNU/Linux systems with X11

USE_GMAKE=	yes
GNU_CONFIGURE=	yes

CONFIGURE_ENV=	CPPFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib"
CFLAGS+=	-I${PREFIX}/include

.include <bsd.port.mk>
