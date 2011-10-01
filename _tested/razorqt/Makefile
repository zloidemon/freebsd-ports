# New ports collection makefile for:	razorqt
# Date created:		2011-09-13
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	razorqt
PORTVERSION=	0.3.0
CATEGORIES=	x11-wm
MASTER_SITES=	SF/razor-qt/

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=

USE_BZIP2=	yes
USE_CMAKE=	yes
CMAKE_VERBOSE=	yes
USE_LDCONFIG=	yes

post-patch:

	${REINPLACE_CMD} -e "s|/usr/share|${LOCALBASE}/share|g" \
		${WRKSRC}/librazorqt/razorqt/xdgicon.cpp

.include <bsd.port.mk>
