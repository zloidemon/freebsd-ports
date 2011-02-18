# New ports collection makefile for:	glpi-plugins-fusioninventory-server
# Date created:		2011-02-18
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	server
PORTVERSION=	2.3.0
CATEGORIES=	net-mgmt
MASTER_SITES=	http://forge.fusioninventory.org/attachments/download/257/
PKGNAMEPREFIX=	glpi-plugins-fusioninventory-
DISTNAME=	fusioninventory_2.3.0-BETA1

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Plugin of glpi to get information of networking devices 

RUN_DEPENDS=	glpi>=0.78:${PORTSDIR}/www/glpi

USE_PHP=	simplexml wddx

WRKSRC=		${WRKDIR}
NO_BUILD=	yes

GLPIPLUGINDIR?=	www/glpi/plugins

.include <bsd.port.pre.mk>

do-install:
	@${MKDIR} -m 0755 ${PREFIX}/${GLPIPLUGINDIR}
.for f in fusinvinventory fusinvsnmp fusioninventory
	@cd ${WRKSRC} && cp -R ${f} ${PREFIX}/${GLPIPLUGINDIR}
	${CHOWN} -R ${WWWOWN}:${WWWGRP} ${PREFIX}/${f}
.endfor

.include <bsd.port.post.mk>
