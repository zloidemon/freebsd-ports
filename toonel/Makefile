# New ports collection makefile for:	toonel
# Date created:		2010-02-04
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	toonel
PORTVERSION=	0.0.50.50
CATEGORIES=	net java
MASTER_SITES=	http://www.toonel.net/generic/005050/
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=	.jar
EXTRACT_ONLY=	${PORTNAME}${EXTRACT_SUFX}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Exploits a tunneling technique combined with data compression

USE_JAVA=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/${PORTNAME}${EXTRACT_SUFX}

.include <bsd.port.pre.mk>
.include <bsd.port.post.mk>
