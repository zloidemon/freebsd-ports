# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD: devel/libe/Makefile 318242 2013-05-15 13:58:28Z wen $

PORTNAME=	libe
PORTVERSION=	0.3.2
CATEGORIES=	devel
MASTER_SITES=	http://hyperdex.org/src/

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	High-performance datastructures and utilities for C++

LICENSE=	BSD

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/libpo6.pc:${PORTSDIR}/devel/libpo6

GNU_CONFIGURE=	yes
USES=		pathfix pkgconfig
USE_LDCONFIG=	yes

ONLY_FOR_ARCHS=	amd64

.include <bsd.port.mk>
