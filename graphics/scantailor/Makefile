# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD: graphics/scantailor/Makefile 318189 2013-05-14 19:13:10Z rakuco $

PORTNAME=	scantailor
PORTVERSION=	0.9.11
PORTREVISION=	1
CATEGORIES=	graphics
MASTER_SITES=	SF

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Scan Tailor is an interactive post-processing tool for scanned pages

LICENSE=	GPLv3

LIB_DEPENDS=	jpeg:${PORTSDIR}/graphics/jpeg \
		tiff:${PORTSDIR}/graphics/tiff \
		jbig:${PORTSDIR}/graphics/jbigkit \
		png15:${PORTSDIR}/graphics/png
BUILD_DEPENDS=	${LOCALBASE}/include/boost/shared_ptr.hpp:${PORTSDIR}/devel/boost-libs

USES=		cmake gettext iconv
USE_QT4=	gui xml qmake_build uic_build moc_build rcc_build \
		linguist_build
MAKE_JOBS_SAFE=	yes

DESKTOP_ENTRIES="Scan Tailor" "Interactive post-processing tool for scanned pages" \
		"" "${PORTNAME}" "Graphics;Scanning;" false

.include <bsd.port.mk>
