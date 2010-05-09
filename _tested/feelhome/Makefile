# New ports collection makefile for:	feelhome
# Date created:		2010-03-23
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	feelhome
PORTVERSION=	0.4.0.204
CATEGORIES=	net
MASTER_SITES=	SF/${PORTNAME}/FeelHome-${PORTVERSION}
DISTNAME=	FeelHome-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Connect your computer to the internet

DOS2UNIX=	yes
USE_QT_VER=	4
QT_COMPONENTS=	gui xml qmake_build uic_build moc_build rcc_build \
		network

WRKSRC=		${WRKDIR}/FeelHome-${PORTVERSION}
PLIST_FILES=	bin/${PORTNAME}

DESKTOP_ENTRIES="FeelHome" "Connect your computer to the internet" \
		"${DATADIR}/${PORTNAME}.png" "${PORTNAME}" \
		"Network;Qt;RemoteAccess;" ${FALSE}

do-configure:
	@cd ${WRKSRC} && ${SETENV} ${CONFIGURE_ENV} \
		${QMAKE} ${PORTNAME}.pro
do-install:
	${MKDIR} ${DATADIR}
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.png ${DATADIR}

.include <bsd.port.mk>
