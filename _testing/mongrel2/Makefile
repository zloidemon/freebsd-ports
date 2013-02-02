# New ports collection makefile for:	mongrel2
# Date created:		2011-09-28
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	mongrel2
PORTVERSION=	1.7.5
CATEGORIES=	www
MASTER_SITES=	http://mongrel2.org/static/downloads/

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Is an application, language, and network arch

LIB_DEPENDS=	zmq.1:${PORTSDIR}/devel/zmq \
		sqlite3.8:${PORTSDIR}/databases/sqlite3

USE_GMAKE=	yes
USE_BZIP2=	yes
MAKE_FLAGS=	freebsd

.include <bsd.port.mk>
