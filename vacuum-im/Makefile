# New ports collection makefile for:	vacuum-im
# Date created:		2009-12-09
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	vacuum
PORTVERSION=	1.0.0
CATEGORIES=	net-im
MASTER_SITES=	GOOGLE_CODE
PKGNAMESUFFIX=	-im
DISTNAME=	${PORTNAME}_${PORTVERSION}.999-source

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Crossplatform Jabber client

PROJECTHOST=	${PORTNAME}${PKGNAMESUFFIX}

USE_QT_VER=	4
USE_LDCONFIG=	yes
QT_COMPONENTS=	gui xml qmake_build uic_build moc_build rcc_build \
		network linguist webkit

DESKTOP_ENTRIES="Vacuum-IM" "Modular, crossplatform Jabber client" \
		"${DATADIR}/resources/menuicons/shared/mainwindowlogo96.png" "${PORTNAME}" \
		"Qt;Network;InstantMessaging;" ${FALSE}

WRKSRC=		${WRKDIR}/${PORTNAME}

do-configure:
	cd ${WRKSRC} && ${QMAKE}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/${PORTNAME}
	${MKDIR} ${DATADIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} resources ${DATADIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} translations ${DATADIR}
	${MKDIR} ${PREFIX}/lib/${PORTNAME}
	cd ${WRKSRC} && ${CP} -R plugins ${PREFIX}/lib/${PORTNAME}
	${CP} ${WRKSRC}/src/libs/libvacuumutils.so.1.0.0 ${PREFIX}/lib
	${LN} -s ${PREFIX}/lib/libvacuumutils.so.1.0.0 ${PREFIX}/lib/libvacuumutils.so
	${LN} -s ${PREFIX}/lib/libvacuumutils.so.1.0.0 ${PREFIX}/lib/libvacuumutils.so.1
	${LN} -s ${PREFIX}/lib/libvacuumutils.so.1.0.0 ${PREFIX}/lib/libvacuumutils.so.1.0

.include <bsd.port.mk>
