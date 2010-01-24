# New ports collection makefile for:	vacuum-im
# Date created:		2009-12-09
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	vacuum
PORTVERSION=	0.0.0.990
CATEGORIES=	net-im
MASTER_SITES=	http://fbsd.zlonet.ru/distfiles/ \
		http://tourservice.kz/zloidemon/distfiles/
PKGNAMESUFFIX=	-im
DISTNAME=	${PORTNAME}${PKGNAMESUFFIX}.r990

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Crossplatform Jabber client

#USE_DOS2UNIX=	yes
USE_BZIP2=	yes
USE_QT_VER=	4
USE_LDCONFIG=	yes
QT_COMPONENTS=	gui xml qmake_build uic_build moc_build rcc_build network

QMAKE_PRO=	${PORTNAME}.pro

WRKSRC=		${WRKDIR}/${PORTNAME}${PKGNAMESUFFIX}

do-configure:
	cd ${WRKSRC} && ${QMAKE}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/${PORTNAME}
	${MKDIR} ${DATADIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} resources ${DATADIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} translations ${DATADIR}
	${MKDIR} ${PREFIX}/lib/${PORTNAME}
	cd ${WRKSRC} && ${CP} -Rv plugins ${PREFIX}/lib/${PORTNAME}
	${CP} ${WRKSRC}/src/libs/libvacuumutils.so.1.0.0 ${PREFIX}/lib
	${LN} -s ${PREFIX}/lib/libvacuumutils.so.1.0.0 ${PREFIX}/lib/libvacuumutils.so
	${LN} -s ${PREFIX}/lib/libvacuumutils.so.1.0.0 ${PREFIX}/lib/libvacuumutils.so.1
	${LN} -s ${PREFIX}/lib/libvacuumutils.so.1.0.0 ${PREFIX}/lib/libvacuumutils.so.1.0

.include <bsd.port.mk>
