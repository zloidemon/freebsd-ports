# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD: ports/graphics/qiviewer/Makefile,v 1.6 2013/02/20 17:55:16 svnexp Exp $

PORTNAME=	qiviewer
PORTVERSION=	0.5.0
PORTREVISION=	2
CATEGORIES=	graphics
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Fast and lightweight image viewer

LICENSE=	GPLv2

USE_BZIP2=	yes
USE_QT4=	gui xml dbus imageformats linguist_build qmake_build \
		moc_build rcc_build uic_build
QMAKEFLAGS+=	PREFIX="${PREFIX}"

PLIST_FILES=	bin/qiviewer \
		share/applications/qiviewer.desktop \
		share/qiviewer/locale/el.qm \
		share/qiviewer/locale/es_AR.qm \
		share/qiviewer/locale/es_ES.qm
PLIST_DIRS=	share/qiviewer/locale \
		share/qiviewer \
		share/applications

WRKSRC=		${WRKDIR}/${PORTNAME}/src

OPTIONS_DEFINE=	WEBP
WEBP_DESC=	Support for WebP image format (experimental)

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MWEBP}
QMAKEFLAGS+=	CONFIG+=enable-webp
PLIST_SUB+=	WEBP=""
.else
PLIST_SUB+=	WEBP="@comment "
.endif

do-configure:
	@cd ${WRKSRC} && ${QMAKE} ${QMAKEFLAGS}

post-configure:
	${REINPLACE_CMD} -e 's|lrelease|lrelease-qt4|g' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
