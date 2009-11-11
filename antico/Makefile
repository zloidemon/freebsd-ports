# New ports collection makefile for:	antico
# Date created:		2009-10-28
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	antico
PORTVERSION=	0.2
CATEGORIES=	x11-wm
MASTER_SITES=	
DISTNAME=	${PORTNAME}-${PORTNAME}-33b232a

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Qt4/X11 Desktop/Window Manager

USE_QT_VER=	4
QT_COMPONENTS=	gui xml qmake_build uic_build moc_build rcc_build

QMAKE_PRO=	${PORTNAME}.pro

WRKSRC=         ${WRKDIR}/${DISTNAME}

post-patch:
	${REINPLACE_CMD} -e 's,QCoreApplication::applicationDirPath() + "/${PORTNAME}.cfg",".config/${PORTNAME}.cfg",g' \
	${WRKSRC}/src/*
	${REINPLACE_CMD} -e 's,QCoreApplication::applicationDirPath() + "/theme/default/","${DATADIR}/theme/default/",g' \
	${WRKSRC}/src/*
	${REINPLACE_CMD} -e 's,QCoreApplication::applicationDirPath() + "/language/","${DATADIR}/language/",g' \
	${WRKSRC}/src/*

do-configure:
	cd ${WRKSRC} && ${QMAKE}

do-install:
	 ${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/${PORTNAME}
	 ${MKDIR} ${DATADIR}
	 cd ${WRKSRC} && ${COPYTREE_SHARE} theme ${DATADIR}
	 cd ${WRKSRC} && ${COPYTREE_SHARE} language ${DATADIR}

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
