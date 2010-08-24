# New ports collection makefile for:	packettracer
# Date created:		2010-03-14
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	packettracer
PORTVERSION=	5.2.1
CATEGORIES=	emulators
MASTER_SITES=	#
DISTNAME=	PacketTracer521

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Graphical Cisco network simulator

RUN_DEPENDS=	bash:${PORTSDIR}/shells/bash

NO_CDROM=	#
NO_BUILD=	yes
USE_LINUX=	yes
USE_LDCONFIG=	yes
USE_LINUX_APPS=	xorglibs

PTDIR=		share/PacketTracer5
PTBINS=		bin/PacketTracer5 \
		bin/linguist \
		bin/unzip \
		bin/zip \
		bin/Linux/unzip \
		bin/Linux/zip \
		extensions/meta \
		extensions/PTUpdater/PTUpdater \
		extensions/PTUpdater/patch \
		extensions/upnp/upnp \
		extensions/upnp/upnpc

PLIST_SUB+=	PTDIR=${PTDIR}
SUB_LIST+=	PTDIR=${PTDIR}

DESKTOP_ENTRIES="PacketTracer" "Cisco Packet Tracer" \
		"${PREFIX}/${PTDIR}/art/app.png" "${PORTNAME}" \
		"Application;Network;" false

post-extract:
	@${REINPLACE_CMD} -e 's,III,${PREFIX}/${PTDIR},g' \
		${WRKSRC}/tpl.*
	@${REINPLACE_CMD} -e 's,/bin/bash,/usr/bin/env bash,g' \
		${WRKSRC}/tpl.*
	@cd ${WRKSRC} && ${BRANDELF} -t Linux ${PTBINS}

do-install:
	@cd ${WRKSRC}/ && ${MKDIR} ${PREFIX}/${PTDIR} && \
		${COPYTREE_SHARE} "LANGUAGES backgrounds extensions lib templates Sounds bin help saves art" ${PREFIX}/${PTDIR}/
	@${INSTALL_SCRIPT} ${WRKSRC}/tpl.linguist ${PREFIX}/${PTDIR}/linguist
	@${INSTALL_SCRIPT} ${WRKSRC}/tpl.${PORTNAME} ${PREFIX}/bin/${PORTNAME}

post-install:
	@cd ${PREFIX}/${PTDIR} && ${CHMOD} 0755 ${PTBINS}

.include <bsd.port.mk>
