# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD$

PORTNAME=	db2dhcp
PORTVERSION=	0.1
CATEGORIES=	net
MASTER_SITES=	http://netpatch.ru/projects/db2dhcp/
DISTNAME=	${PORTNAME}-${PORTVERSION}.a.10

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	The Dynamic Host Configuration Protocol server with SQL

USE_RC_SUBR=    db2dhcp

USE_BZIP2=	yes
HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	CPPFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib" \
		--prefix=${PREFIX}

OPTIONS_DEFINE=	MYSQL PGSQL
MYSQL_DESC=	MySQL database support
PGSQL_DESC=	PostgreSQL database support

OPTIONS_DEFAULT=MYSQL

PLIST_FILES=	sbin/db2dhcp

.include <bsd.port.options.mk>

post-extract:
	${REINPLACE_CMD} -e 's|postgresql/libpq-fe.h|libpq-fe.h|g' \
		${WRKSRC}/configure

.if ${PORT_OPTIONS:MMYSQL}
CONFIGURE_ARGS+=	--enable-mysql \
			LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib/mysql"
USE_MYSQL=	yes
.endif

.if ${PORT_OPTIONS:MPGSQL}
CONFIGURE_ARGS+=	--enable-postgresql
USE_PGSQL=	yes
.endif

.include <bsd.port.mk>
