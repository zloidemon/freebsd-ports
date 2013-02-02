# New ports collection makefile for:	db2dhcp
# Date created:		2011-03-06
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	db2dhcp
PORTVERSION=	0.1
CATEGORIES=	net
MASTER_SITES=	http://netpatch.ru/projects/db2dhcp/
DISTNAME=	${PORTNAME}-${PORTVERSION}.a

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	The Dynamic Host Configuration Protocol server with SQL

USE_BZIP2=	yes
HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	CPPFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib -L${LOCALBASE}/lib/mysql" \
		--prefix=${PREFIX}

OPTIONS=	MYSQL "MySQL database support" on \
		PGSQL "PostgreSQL database support" off

PLIST_FILES=	sbin/db2dhcp

.include <bsd.port.pre.mk>

post-extract:
	${REINPLACE_CMD} -e 's|postgresql/libpq-fe.h|libpq-fe.h|g' \
		${WRKSRC}/configure

.if defined(WITH_MYSQL)
CONFIGURE_ARGS+=	--enable-mysql
USE_MYSQL=	yes
.endif

.if defined(WITH_PGSQL)
CONFIGURE_ARGS+=	--enable-postgresql
USE_PGSQL=	yes
.endif

.include <bsd.port.post.mk>
