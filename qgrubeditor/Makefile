# New ports collection makefile for:	qgrubeditor
# Date created:		2009-10-30
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	qgrubeditor
PORTVERSION=	2.5.0
CATEGORIES=	sysutils
MASTER_SITES=	http://www.qt-apps.org/CONTENT/content-files/
DISTNAME=	60391-QGRUBEditor-${PORTVERSION}-src

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	GRUB configuration utility using QT4

USE_BZIP2=	yes

USE_QT_VER=	4
QT_COMPONENTS=	gui xml qmake_build uic_build moc_build rcc_build

QMAKE_PRO=	QGRUBEditor.pro

WRKSRC=		${WRKDIR}/QGRUBEditor

post-patch:
	${REINPLACE_CMD} -e 's,"/usr/share/apps/${PORTNAME}/translations/","${DATADIR}/translations/",g' \
	${WRKSRC}/src/*.cpp

do-configure:
	cd ${WRKSRC} && ${QMAKE}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/${PORTNAME} ${PREFIX}/bin/${PORTNAME}
	${MKDIR} ${DATADIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} ts ${DATADIR}/translations
	cd ${WRKSRC} && ${COPYTREE_SHARE} images ${DATADIR}/images

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
