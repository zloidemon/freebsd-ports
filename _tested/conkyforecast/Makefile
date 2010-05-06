# New ports collection makefile for:	conkyforecast
# Date created:		2010-05-07
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	conkyforecast
PORTVERSION=	2.09
CATEGORIES=	deskutils
MASTER_SITES=	http://launchpadlibrarian.net/37518633/
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Conkyforecast Weather forecast script

RUN_DEPENDS=	conky:${PORTSDIR}/sysutils/conky

USE_PYTHON=	yes
NO_BUILD=	yes
USE_PYDISTUTILS=yes
INSTALL_EGGINFO=yes
USE_GETTEXT=	yes

WRKSRC=		${WRKDIR}/src

post-patch:
	@cd ${WRKSRC} && ${REINPLACE_CMD} -e 's,/usr/share/${PORTNAME},${DATADIR},g' \
		setup.py test/conkyrc example/conkyrc conkyForecast.py conkyForecast
	@${REINPLACE_CMD} -e 's,/usr/share/fonts,${DATADIR}/fonts,g' ${WRKSRC}/setup.py
	@cd ${WRKSRC} && ${RM} -fr test/conkyrc.bak example/conkyrc.bak

.include <bsd.port.mk>
