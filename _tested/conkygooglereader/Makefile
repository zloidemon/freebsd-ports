# New ports collection makefile for:	conkygooglereader
# Date created:		2010-05-09
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	conkygooglereader
PORTVERSION=	1.00
CATEGORIES=	deskutils
MASTER_SITES=	http://launchpadlibrarian.net/23175526/ \
		http://fbsd.zlonet.ru/distfiles/
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Googlereader script for conky

BUILD_DEPENDS=	conky:${PORTSDIR}/sysutils/conky

USE_PYTHON=	yes
NO_BUILD=	yes
USE_PYDISTUTILS=yes
INSTALL_EGGINFO=yes
USE_GETTEXT=	yes

WRKSRC=		${WRKDIR}/src

post-patch:
	@cd ${WRKSRC} && ${REINPLACE_CMD} -e 's,/usr/share/${PORTNAME},${DATADIR},g' \
		setup.py example/conkyrc conkyGoogleReader.py conkyGoogleReader
	@cd ${WRKSRC} && ${RM} -fr example/conkyrc.bak

.include <bsd.port.mk>
