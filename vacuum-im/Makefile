# New ports collection makefile for:	vacuum-im
# Date created:		2009-12-09
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	vacuum-im
PORTVERSION=	1.0.0
CATEGORIES=	net-im
MASTER_SITES=	GOOGLE_CODE
DISTNAME=	${VACUUM}_${PORTVERSION}.999-source

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Crossplatform Jabber client

USE_QT_VER=	4
USE_LDCONFIG=	yes
QT_COMPONENTS=	gui xml qmake_build uic_build moc_build rcc_build \
		network linguist webkit

DESKTOP_ENTRIES="Vacuum-IM" "Modular, crossplatform Jabber client" \
		"${DATADIR}/resources/menuicons/shared/mainwindowlogo96.png" "${VACUUM}" \
		"Qt;Network;InstantMessaging;" ${FALSE}

VACUUM=		vacuum
DATADIR=	${PREFIX}/share/${VACUUM}

WRKSRC=		${WRKDIR}/${VACUUM}

do-configure:
	cd ${WRKSRC} && ${QMAKE}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${VACUUM} ${PREFIX}/bin/${VACUUM}
	${MKDIR} ${DATADIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} resources ${DATADIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} translations ${DATADIR}
	${MKDIR} ${PREFIX}/lib/${VACUUM}
	cd ${WRKSRC} && ${CP} -Rv plugins ${PREFIX}/lib/${VACUUM}
	${CP} ${WRKSRC}/src/libs/libvacuumutils.so.1.0.0 ${PREFIX}/lib
	${LN} -s ${PREFIX}/lib/libvacuumutils.so.1.0.0 ${PREFIX}/lib/libvacuumutils.so
	${LN} -s ${PREFIX}/lib/libvacuumutils.so.1.0.0 ${PREFIX}/lib/libvacuumutils.so.1
	${LN} -s ${PREFIX}/lib/libvacuumutils.so.1.0.0 ${PREFIX}/lib/libvacuumutils.so.1.0

.include <bsd.port.mk>
