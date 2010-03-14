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

NO_CDROM=	#
NO_BUILD=	yes
USE_LINUX=	yes
USE_LINUX_APPS=	xorglibs

PTDIR=		share/${PORTNAME}
PTBINS=		bin/{PacketTracer5,linguist,unzip,zip} \
		bin/Linux/{unzip,zip} \
		extensions/meta \
		extensions/PTUpdater/{PTUpdater,patch,update_url.txt} \
		extensions/upnp/{upnp,upnpc}

DESKTOP_ENTRIES="PacketTracer" "Cisco Packet Tracer" \
		"${PREFIX}/${PTDIR}/art/app.png" "${PORTNAME}" \
		"Application;Network;" ${FALSE}

post-extract:
	@${REINPLACE_CMD} -e 's,III,${PREFIX}/${PTDIR},g' \
		${WRKSRC}/tpl.*
	@${REINPLACE_CMD} -e 's,/bin/bash,/usr/bin/env bash,g' \
		${WRKSRC}/tpl.*
	cd ${WRKSRC} && ${BRANDELF} -t Linux ${PTBINS}

do-install:
	cd ${WRKSRC}/ && ${MKDIR} ${PREFIX}/${PTDIR} && \
		${COPYTREE_SHARE} "LANGUAGES backgrounds extensions lib templates Sounds bin help saves art" ${PREFIX}/${PTDIR}/
	${INSTALL_SCRIPT} ${WRKSRC}/tpl.linguist ${PREFIX}/${PTDIR}/linguist
	${INSTALL_SCRIPT} ${WRKSRC}/tpl.${PORTNAME} ${PREFIX}/bin/${PORTNAME}

post-install:
	cd ${PREFIX}/${PTDIR} && ${CHMOD} 0755 ${PTBINS}

.include <bsd.port.mk>
