# New ports collection makefile for:	linux-ca-certificates
# Date created:		2009-10-31
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	ca-certificates
PORTVERSION=	0.1
CATEGORIES=	security linux
MASTER_SITES=	${MASTER_SITE_DEBIAN_POOL}
PKGNAMEPREFIX=	linux-
DISTNAME=	${PORTNAME}_20080809_all
EXTRACT_SUFX=	.deb

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Common CA certificates

NO_BUILD=	yes

WRKSRC=		${WRKDIR}/usr

do-configure:
	cd ${WRKDIR} && ${TAR} -xf data.tar.gz

do-install:
	${MKDIR} ${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/share/${PORTNAME}/* ${DATADIR}
	${LN} -sf ${DTADIR} ${OPENSSLDIR}/${PORTNAME}

.include <bsd.port.mk>
