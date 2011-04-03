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
QT_COMPONENTS=	gui xml dbus linguist qmake_build moc_build \
		rcc_build
QMAKEFLAGS+=	PREFIX="${PREFIX}"

PLIST_FILES=	bin/qiviewer \
		share/applications/qiviewer.desktop \
		%%DATADIR%%/locale/es_AR.qm \
		%%DATADIR%%/locale/es_ES.qm \

PLIST_DIRS=	share/qiviewer/locale \
		share/qiviewer

WRKSRC=		${WRKDIR}/${PORTNAME}/src

OPTIONS=	WEBP "support webp (experemental)" off

.include <bsd.port.pre.mk>

.if defined(WITHOUT_WEBP)
PLIST_SUB+=	WEBP="@comment "
.else
QMAKEFLAGS+=	CONFIG+=enable-webp
PLIST_SUB+=	WEBP=""
.endif

do-configure:
	@cd ${WRKSRC} && ${QMAKE} ${QMAKEFLAGS}
post-configure:
	${REINPLACE_CMD} -e 's|lrelease|lrelease-qt4|g' \
		${WRKSRC}/Makefile

.include <bsd.port.post.mk>
