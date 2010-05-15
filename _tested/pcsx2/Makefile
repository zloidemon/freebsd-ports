# New ports collection makefile for:	pcsx2
# Date created:		2010-05-10
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	pcsx2
PORTVERSION=	0.9.6
CATEGORIES=	emulators
MASTER_SITES=	http://fbsd.zlonet.ru/distfiles/
DISTNAME=	Pcsx2_${PORTVERSION}_source

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	PlayStation2 emulator

BUILD_DEPENDS=	p7zip:${PORTSDIR}/archivers/p7zip

USE_BZIP2=	yes
USE_DOS2UNIX=	yes

WRKSRC=		${WRKDIR}/rc_${PORTVERSION}

do-configure:
	cd ${WRKSRC} && ${SH} ./build.sh

.include <bsd.port.pre.mk>
.include <bsd.port.post.mk>
