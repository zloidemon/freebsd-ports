# New ports collection makefile for:	ventana3d
# Date created:		2010-07-21
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	ventana3d
PORTVERSION=	0.6.1
CATEGORIES=	x11-wm
MASTER_SITES=	SF

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	3d WM

LICENSE=	GPLv2

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	CPPFLAGS="-I/usr/local/include" \
	       	LDFLAGS="-L/usr/local/lib" \
		CFLAGS+="-fno-builtin -g -O2"

pre-install:
	${REINPLACE_CMD} -e 's|/usr/local|${PREFIX}|g' \
		${WRKSRC}/install_lib_X11

.include <bsd.port.pre.mk>
.include <bsd.port.post.mk>
