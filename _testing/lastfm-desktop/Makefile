# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD$

PORTNAME=	lastfm
PORTVERSION=	2.1.30
CATEGORIES=	audio
MASTER_SITES=	http://cdn.last.fm/client/Linux/
PKGNAMESUFFIX=	-desktop
DISTNAME=	Last.fm-2.1.30

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=

LICENSE=	GPLv3

LIB_DEPENDS=	lastfm:${PORTSDIR}/audio/liblastfm

USE_BZIP2=	yes
USE_QT4=	gui network xml qmake_build uic_build moc_build rcc_build \
		linguist_build

WRKSRC=		${WRKDIR}/${PORTNAME}${PKGNAMESUFFIX}-${PORTVERSION}

.include <bsd.port.pre.mk>
do-configure:
	cd ${WRKSRC} && ${QMAKE} ${QMAKEFLAGS}
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/_bin/Last.fm\ Scrobbler \
		${PREFIX}/bin/${PORTNAME}${PKGNAMESUFFIX}
	${INSTALL_LIB} ${WRKSRC}/_bin/lib*.so* \
		${PREFIX}/lib

.include <bsd.port.post.mk>
