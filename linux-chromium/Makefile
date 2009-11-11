# New ports collection makefile for:	linux-chromium
# Date created:		2009-11-10
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	chromium
PORTVERSION=	4.0.227.0
CATEGORIES=	www linux
MASTER_SITES=	http://spot.fedorapeople.org/chromium/F10/
PKGNAMEPREFIX=	linux-
DISTNAME=	${PORTNAME}-${PORTVERSION}-${RPMVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Web browser

USE_LINUX_RPM=	yes
USE_LINUX=	yes
USE_LINUX_APPS=	xorglibs gtk2 nss libxml2 alsalib dbusglib
ONLY_FOR_ARCH=	i386 amd64
LINUX_DIST_VER=	10
USE_LDCONFIG=	yes
RPMVERSION=	0.1.20091027svn30269.fc10

.include <bsd.port.mk>
