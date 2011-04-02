# New ports collection makefile for:	qiviewer
# Date created:		2011-04-02
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	qiviewer
PORTVERSION=	0.4.0
CATEGORIES=	graphics
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	A Qt image viewer, designed to be fast and lightweight

LICENSE=	GPLv2

USE_BZIP2=	yes
USE_QT_VER=	4
QT_COMPONENTS=	gui xml dbus qmake_build moc_build rcc_build

WRKSRC=		${WRKDIR}/${PORTNAME}/src

do-configure:
	@cd ${WRKSRC} && ${QMAKE} ${QMAKEPRO}
	
post-configure:	
	${REINPLACE_CMD} -e 's|lrelease|lrelease-qt4|g' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
