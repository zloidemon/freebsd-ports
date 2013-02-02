# New ports collection makefile for:	memcached-udfs
# Date created:		2011-04-04
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	memcached-udfs
PORTVERSION=	1.1
CATEGORIES=	databases
MASTER_SITES=	http://launchpadlibrarian.net/35725713/
DISTNAME=	memcached_functions_mysql-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Memcached Functions for MySQL

LIB_DEPENDS=	memcached.4:${PORTSDIR}/databases/libmemcached-udfs

LICENSE=	GPLv2

HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	CPPFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib" \
		--prefix=${PREFIX} 
NO_MANCOMPRESS=	yes

PLIST_FILES=	lib/libmemcached_functions_mysql.so.0 \
		lib/libmemcached_functions_mysql.so \
		lib/libmemcached_functions_mysql.la \
		lib/libmemcached_functions_mysql.a

MAN3=		memc_get.3 \
		memc_set.3 \
		memc_append.3 \
		memc_prepend.3 \
		memc_increment.3 \
		memc_decrement.3 \
		memc_servers_set.3 \
		memc_list_behaviors.3 \
		memc_list_hash_types.3 \
		memc_list_distribution_types.3 \
		memc_servers_behavior_set.3 \
		memc_servers_behavior_get.3 \
		memc_behavior_set.3 \
		memc_behavior_get.3 \
		memc_udf_version.3 \
		memc_libmemcached_version.3 \
		memc_stat_get_keys.3 \
		memc_stats.3

.include <bsd.port.pre.mk>

pre-configure:
	${REINPLACE_CMD} -e 's|{datarootdir}/man|{prefix}/man|g' \
		${WRKSRC}/configure

.include <bsd.port.post.mk>
