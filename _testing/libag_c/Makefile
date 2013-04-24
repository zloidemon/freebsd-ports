# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD$

PORTNAME=	libag_c
PORTVERSION=	2.26.0
CATEGORIES=	devel
MASTER_SITES=	http://www.angelcode.com/angelscript/extras/
DISTNAME=	angelscript_clib

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	C interface for AngelScript

LIB_DEPENDS=	angelscript:${PORTSDIR}/lang/angelscript

MAKEFILE=	makefile
MAKE_ARGS=	PREFIX=${PREFIX} CFLAGS+="-I${LOCALBASE}/include"
USE_LDCONFIG=	yes
USE_ZIP=	yes
WRKSRC=		${WRKDIR}/clib/projects/gnuc

PLIST_FILES=	lib/libas_c.so.2 \
		lib/libas_c.so \
		include/angelscript_c.h

.include <bsd.port.mk>
