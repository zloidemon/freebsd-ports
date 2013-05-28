# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD$

PORTNAME=	hyperdex
PORTVERSION=	1.0
CATEGORIES=	databases
MASTER_SITES=	http://hyperdex.org/src/
DISTNAME=	${PORTNAME}-${PORTVERSION}.rc4

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Searchable distributed key-value store

LICENSE=	BSD

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/libpo6.pc:${PORTSDIR}/devel/libpo6
LIB_DEPENDS=	e:${PORTSDIR}/devel/libe \
		cityhash:${PORTSDIR}/devel/cityhash \
		glog:${PORTSDIR}/devel/glog \
		popt:${PORTSDIR}/devel/popt \
		replicant:${PORTSDIR}/sysutils/replicant

ONLY_FOR_ARCHS=	amd64

GNU_CONFIGURE=	yes
ONLY_FOR_ARCHS=	amd64
USE_GCC=	4.6+
USE_LDCONFIG=	yes
USE_PYTHON=	yes
USES=		pathfix pkgconfig
CONFIGURE_ARGS=	CXXFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib"

MAN1=	hyperdex.1

OPTIONS_DEFINE=		ALL_LOG GTEST PY_BINDINGS WARNINGS
ALL_LOG_DESC=		Enable all messages in log
PY_BINDINGS_DESC=	Enable Python bindings
GTEST_DESC=		Enable tests using the Google C++
WARNINGS_DESC=		Enable many warnings

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MALL_LOG}
CONFIGURE_ARGS+=	--enable-log-all-messages
.endif

.if ${PORT_OPTIONS:MGTEST}
LIB_DEPENDS+=		gtest:${PORTSDIR}/devel/googletest
CONFIGURE_ARGS+=	--enable-gtest
.endif

.if ${PORT_OPTIONS:MPY_BINDINGS}
#RUN_DEPENDS+=		devel/py-parsing
CONFIGURE_ARGS+=	--enable-python-bindings
PLIST_SUB+=		PY_BINDINGS=""
.else
PLIST_SUB+=		PY_BINDINGS="@comment "
.endif

.if ${PORT_OPTIONS:MWARNINGS}
CONFIGURE_ARGS+=	--enable-wanal-cxxflags
.endif

.include <bsd.port.mk>
