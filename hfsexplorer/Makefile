# New ports collection makefile for:	hfsexplorer
# Date created:		2009-11-27
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	hfsexplorer
PORTVERSION=	0.21
CATEGORIES=	sysutils java
MASTER_SITES=	SF/catacombae/HFSExplorer/${PORTVERSION}/
DISTNAME=	${PORTNAME}-0_21-src

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	HFSExplorer read Mac-formatted harddisks and disk images.

RUN_DEPENDS=	pushd:${PORTSDIR}/devel/p5-File-pushd

USE_ZIP=	yes
USE_JAVA=	yes
JAVA_VERSION=	1.6
NO_BUILD=	yes

.include <bsd.port.pre.mk>

post-configure:
	cd ${WRKDIR} && ${SH} buildall.sh

do-install:
	@${MKDIR} ${DATADIR}
	@${MKDIR} ${DATADIR}/lib
	@${MKDIR} ${DATADIR}/res
	@${MKDIR} ${DATADIR}/doc

.include <bsd.port.post.mk>
