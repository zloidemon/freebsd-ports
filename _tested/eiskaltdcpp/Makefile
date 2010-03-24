# New ports collection makefile for:	eiskaltdcpp
# Date created:		2010-03-24
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	eiskaltdcpp
PORTVERSION=	2.0
CATEGORIES=	net-p2p
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	A Direct Connect client QT GUI

LIB_DEPENDS=	upnp.3:${PORTSDIR}/devel/upnp

PROJECTHOST=	eiskaltdc

USE_ICONV=	yes
USE_GETTEXT=	yes
USE_CMAKE=	yes
USE_QT_VER=	4
USE_LDCONFIG=	yes
QT_COMPONENTS=	gui xml qmake_build uic_build moc_build rcc_build \
		dbus network sql linguist

OPTIONS=	SPELL "Spell checking support" off \
		BAR "Progress bar for free space" off

.include <bsd.port.pre.mk>

pre-configure:
	${REINPLACE_CMD} -e 's,share/man/,man/,g' \
		${WRKSRC}/${PORTNAME}/CMakeLists.txt

.if defined(WITH_BAR)
LIB_DEPENDS+=	boost_system.4:${PORTSDIR}/devel/boost-libs
CMAKE_ARGS+=	-DFREE_SPACE_BAR:BOOL=1
.endif

.if definede(WITH_SPELL)
LIB_DEPENDS+=	aspell.16:${PORTSDIR}/textproc/aspell
CMAKE_ARGS+=	-DUSE_ASPELL:BOOL=1
.endif

.include <bsd.port.post.mk>
