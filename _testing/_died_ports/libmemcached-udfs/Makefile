# New ports collection makefile for:	libmemcached-udfs
# Date created:				January 22, 2008
# Whom:					Yen-Ming Lee <leeym@FreeBSD.org>
#
# $FreeBSD: ports/databases/libmemcached-udfs/Makefile,v 1.28 2010/01/19 04:24:38 vanilla Exp $
#

PORTNAME=	libmemcached-udfs
PORTVERSION=	0.37
CATEGORIES=	databases
MASTER_SITES=	http://download.tangent.org/

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	A C and C++ client library to the memcached server

USE_GMAKE=	yes
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
USE_GNOME=	gnomehack gnometarget pkgconfig
CONFIGURE_ARGS=	--with-memcached=no --disable-libevent --without-libevent-prefix

post-patch:
	${REINPLACE_CMD} -e 's|^pkgconfigdir.*|pkgconfigdir = $${PREFIX}/libdata/pkgconfig|' \
			${WRKSRC}/Makefile.in
.if defined(NO_INSTALL_MANPAGES)
	${REINPLACE_CMD} -e 's|^SUBDIRS = docs |SUBDIRS = |' ${WRKSRC}/Makefile.in
.endif

.if !defined(NO_INSTALL_MANPAGES)
USE_PERL5_BUILD=yes # pod2man
MAN1=		memcapable.1 \
		memcat.1 \
		memcp.1 \
		memdump.1 \
		memerror.1 \
		memflush.1 \
		memrm.1 \
		memslap.1 \
		memstat.1
MAN3=		hashkit_clone.3 \
		hashkit_crc32.3 \
		hashkit_create.3 \
		hashkit_fnv1_32.3 \
		hashkit_fnv1_64.3 \
		hashkit_fnv1a_32.3 \
		hashkit_fnv1a_64.3 \
		hashkit_free.3 \
		hashkit_functions.3 \
		hashkit_hsieh.3 \
		hashkit_is_allocated.3 \
		hashkit_jenkins.3 \
		hashkit_md5.3 \
		hashkit_murmur.3 \
		hashkit_value.3 \
		libmemcached.3 \
		libmemcachedutil.3 \
		libmemcached_examples.3 \
		memcached_add.3 \
		memcached_add_by_key.3 \
		memcached_analyze.3 \
		memcached_append.3 \
		memcached_append_by_key.3 \
		memcached_behavior_get.3 \
		memcached_behavior_set.3 \
		memcached_callback_get.3 \
		memcached_callback_set.3 \
		memcached_cas.3 \
		memcached_cas_by_key.3 \
		memcached_clone.3 \
		memcached_create.3 \
		memcached_decrement.3 \
		memcached_decrement_with_initial.3 \
		memcached_delete.3 \
		memcached_delete_by_key.3 \
		memcached_dump.3 \
		memcached_fetch.3 \
		memcached_flush_buffers.3 \
		memcached_fetch_execute.3 \
		memcached_fetch_result.3 \
		memcached_free.3 \
		memcached_generate_hash_value.3 \
		memcached_get.3 \
		memcached_get_by_key.3 \
		memcached_get_memory_allocators.3 \
		memcached_get_user_data.3 \
		memcached_increment.3 \
		memcached_increment_with_initial.3 \
		memcached_lib_version.3 \
		memcached_mget.3 \
		memcached_mget_by_key.3 \
		memcached_mget_execute.3 \
		memcached_mget_execute_by_key.3 \
		memcached_pool_behavior_get.3 \
		memcached_pool_behavior_set.3 \
		memcached_pool_create.3 \
		memcached_pool_destroy.3 \
		memcached_pool_pop.3 \
		memcached_pool_push.3 \
		memcached_prepend.3 \
		memcached_prepend_by_key.3 \
		memcached_quit.3 \
		memcached_replace.3 \
		memcached_replace_by_key.3 \
		memcached_server_add.3 \
		memcached_server_count.3 \
		memcached_server_cursor.3 \
		memcached_server_list.3 \
		memcached_server_list_append.3 \
		memcached_server_list_count.3 \
		memcached_server_list_free.3 \
		memcached_server_push.3 \
		memcached_servers_parse.3 \
		memcached_set.3 \
		memcached_set_by_key.3 \
		memcached_set_memory_allocators.3 \
		memcached_set_user_data.3 \
		memcached_stat.3 \
		memcached_stat_get_keys.3 \
		memcached_stat_get_value.3 \
		memcached_stat_servername.3 \
		memcached_strerror.3 \
		memcached_verbosity.3 \
		memcached_version.3
.endif

.include <bsd.port.mk>
