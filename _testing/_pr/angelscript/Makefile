# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD$

PORTNAME=	angelscript
PORTVERSION=	2.26.2
CATEGORIES=	lang
MASTER_SITES=	http://www.angelcode.com/angelscript/sdk/files/
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	AngelCode Scripting Library

LICENSE=	ZLIB

MAKEFILE=	makefile
MAKE_ARGS=	LOCAL=${PREFIX}
USE_GMAKE=	yes
USE_LDCONFIG=	yes
USE_ZIP=	yes

WRKSRC=		${WRKDIR}/sdk/angelscript/projects/gnuc/

PLIST_FILES=	include/angelscript.h

OPTIONS_SINGLE=	TYPE
OPTIONS_SINGLE_TYPE=	STATIC SHARED
STATIC_DESC=		Build static library
SHARED_DESC=		Build shared library
OPTIONS_DEFAULT=	STATIC

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MSHARED}
LIB_VERSION=	2
MAKE_ARGS+=	SHARED=1 VERSION=${LIB_VERSION}
PLIST_FILES+=	lib/libangelscript.so.${LIB_VERSION} \
		lib/libangelscript-${LIB_VERSION}.so \
		lib/libangelscript.so

.else
PLIST_FILES+=	lib/libangelscript.a
.endif

.include <bsd.port.mk>
