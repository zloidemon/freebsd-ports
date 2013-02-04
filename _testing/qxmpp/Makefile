# New ports collection makefile for:	qxmpp
# Date created:		2012-01-07
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD: ports/net-im/qxmpp/Makefile,v 1.3 2012/06/06 06:44:15 miwi Exp $
#

PORTNAME=	qxmpp
PORTVERSION=	0.6.3
CATEGORIES=	net-im
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	QXmpp is an xmpp client library based on Qt & C++

LICENSE=	LGPL21

USE_QT4=	gui moc_build network qmake_build qtestlib rcc_build \
		uic_build xml
USE_LDCONFIG=	yes

CONFLICTS=	${PORTNAME}-leechcraft-[0-9]*

do-configure:
	@${REINPLACE_CMD} -e 's|%%QT_LIBDIR_REL%%|${QT_LIBDIR_REL}|g' \
		${WRKSRC}/src/src.pro
	@${REINPLACE_CMD} -e 's|%%DOCSDIR%%|${DOCSDIR}|g;s|tests||g' \
		${WRKSRC}/${PORTNAME}.pro
	cd ${WRKSRC} && ${QMAKE} ${QMAKEFLAGS} PREFIX=${PREFIX}

.include <bsd.port.mk>
