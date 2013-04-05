# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD$

PORTNAME=	monetdb
PORTVERSION=	11.13.9
CATEGORIES=	databases
MASTER_SITES=	http://dev.monetdb.org/downloads/sources/Latest/
DISTNAME=	MonetDB-${PORTVERSION}
#DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Open-Source column-oriented database

LIB_DEPENDS=	execinfo:${PORTSDIR}/devel/libexecinfo \
		ssl.8:${PORTSDIR}/security/openssl

USE_XZ=		yes
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_PKGCONFIG=	yes
USE_LDCONFIG=	yes
USES=		pathfix bison:build

CONFIGURE_ARGS=	CFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib" \
		LIBS="-lexecinfo -lssl -lfl" \
		--enable-instrument=no \
		--enable-strict=no --with-pic=yes \
		--with-python3=no \
		--enable-jaql=no \
		--with-rubygem=no

MAN1=		mclient.1 \
		monetdb.1 \
		msqldump.1

OPTIONS_DEFINE=		CONSOLE DATACELL DEBUG FITS JDBC LARGEFILE MEROCONTROL \
			MONETDB5 ODBC OID32 OPTIMIZE PROFILE RDF TESTING VALGRIND
CONSOLE_DESC=		Enable direct console on the server
DATACELL_DESC=		Enable datacell stream components
DEBUG_DESC=		Enable debug mode
FITS_DESC=		Enable support FITS
JDBC_DESC=		MonetDB JDBC driver
LARGEFILE_DESC=		omit support for large files
MEROCONTROL_DESC=	Merovingian control driver(depended by JDBC)
MONETDB5_DESC=		Enable support MonetDB5
ODBC_DESC=		Enable ODBC driver
OID32_DESC=		32 bits for OIDs on a 64-bit architecture
OPTIMIZE_DESC=		Enable extra optimization
PL_BINDINGS_DESC=	Enable Perl bindings
PROFILE_DESC=		Enable profile
PY_BINDINGS_DESC=	Enable Python bindings
RDF_DESC=		Enable RDF(experimental)
TESTING_DESC=		Install testing scripts
VALGRIND_DESC=		Valgrind support
HASH_MD5_DESC=		MD5 password hash algorithm
HASH_SHA1_DESC=		SHA1 password hash algorithm
HASH_RIPE_DESC=		RIPEMD160 password hash algorithm
HASH_SHA224_DESC=	SHA224 password hash algorithm
HASH_SHA256_DESC=	SHA256 password hash algorithm
HASH_SHA384_DESC=	SHA384 password hash algorithm
HASH_SHA512_DESC=	SHA512 password hash algorithm
OPTIONS_GROUP=		BINDINGS
OPTIONS_GROUP_BINDINGS=	PL_BINDINGS PY_BINDINGS
OPTIONS_SINGLE=		HASHALG
OPTIONS_SINGLE_HASHALG=	HASH_MD5 HASH_SHA1 HASH_RIPE HASH_SHA224 \
			HASH_SHA256 HASH_SHA384 HASH_SHA512
OPTIONS_DEFAULT=	CONSOLE FITS HASH_SHA512 LARGEFILE MONETDB5

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MCONSOLE}
CONFIGURE_ARGS+=	--enable-console=yes
.else
CONFIGURE_ARGS+=	--enable-console=no
.endif

.if ${PORT_OPTIONS:MDATACELL}
CONFIGURE_ARGS+=	--enable-datacell=yes
.else
CONFIGURE_ARGS+=	--enable-datacell=no
.endif

.if ${PORT_OPTIONS:MDEBUG}
CONFIGURE_ARGS+=	--enable-developer=yes \
			--enable-debug=yes \
			--enable-assert=yes
.else
CONFIGURE_ARGS+=	--enable-developer=no \
			--enable-debug=no \
			--enable-assert=no
.endif

.if ${PORT_OPTIONS:MFITS}
LIB_DEPENDS+=		cfitsio:${PORTSDIR}/astro/cfitsio
CONFIGURE_ARGS+=	--enable-fits=yes
PLIST_SUB+=		FITS=""
.else
CONFIGURE_ARGS+=	--enable-fits=no
PLIST_SUB+=		FITS="@comment "
.endif

.if ${PORT_OPTIONS:MJDBC}
BUILD_DEPENDS+=		ant:${PORTSDIR}/devel/apache-ant
CONFIGURE_ARGS+=	--enable-jdbc=yes \
			--with-java=yes \
			--with-ant=yes
PLIST_SUB+=		JDBC=""
.else
CONFIGURE_ARGS+=	--enable-jdbc=no \
			--with-java=no \
			--with-ant=no
PLIST_SUB+=		JDBC="@comment "
.endif

.if ! ${PORT_OPTIONS:MLARGEFILE}
CONFIGURE_ARGS+=	--disable-largefile
.endif

.if ${PORT_OPTIONS:MMEROCONTROL}
.if ${PORT_OPTIONS:MJDBC}
CONFIGURE_ARGS+=	--enable-merocontrol=yes
PLIST_SUB+=		MEROCONTROL=""
.else
BROKEN=			Please enable JDBC
.endif
.else
CONFIGURE_ARGS+=	--enable-merocontrol=no
PLIST_SUB+=		MEROCONTROL="@comment "
.endif

.if ${PORT_OPTIONS:MMONETDB5}
LIB_DEPENDS+=		uuid:${PORTSDIR}/misc/e2fsprogs-libuuid \
			geos:${PORTSDIR}/graphics/geos \
			pcre:${PORTSDIR}/devel/pcre \
			xml2:${PORTSDIR}/textproc/libxml2
CONFIGURE_ARGS+=	--enable-sql=yes \
			--enable-monetdb5=yes \
			--enable-gdk=yes \
			--enable-geom=yes
MAN1+=			monetdbd.1 \
			mserver5.1
PLIST_SUB+=		MONETDB5=""
.else
CONFIGURE_ARGS+=	--enable-sql=no \
			--enable-gdk=no \
			--enable-monetdb5=no \
			--enable-geom=no
PLIST_SUB+=		MONETDB5="@comment "
.endif

.if ${PORT_OPTIONS:MODBC}
LIB_DEPENDS+=		odbc:${PORTSDIR}/databases/unixODBC
CONFIGURE_ARGS+=	--enable-odbc=yes
PLIST_SUB+=		ODBC=""
.else
CONFIGURE_ARGS+=	--enable-odbc=no
PLIST_SUB+=		ODBC="@comment "
.endif

.if ${PORT_OPTIONS:MOID32}
CONFIGURE_ARGS+=	--enable-oid32=yes
.else
CONFIGURE_ARGS+=	--enable-oid32=no
.endif

.if ${PORT_OPTIONS:MOPTIMIZE}
CONFIGURE_ARGS+=	--enable-optimize=yes
.else
CONFIGURE_ARGS+=	--enable-optimize=no
.endif

.if ${PORT_OPTIONS:MPL_BINDINGS}
USE_PERL5=		yes
CONFIGURE_ARGS+=	--with-perl=yes \
			--with-perl-libdir="${SITE_PERL_REL}"
PLIST_SUB+=		PL_BINDINGS=""
.else
CONFIGURE_ARGS+=	--with-perl=no
PLIST_SUB+=		PL_BINDINGS="@comment "
.endif

.if ${PORT_OPTIONS:MPROFILE}
CONFIGURE_ARGS+=	--enable-profile=yes
.else
CONFIGURE_ARGS+=	--enable-profile=no
.endif

.if ${PORT_OPTIONS:MPY_BINDINGS}
USE_PYTHON=		yes
CONFIGURE_ARGS+=	--with-python2=yes
PLIST_SUB+=		PY_BINDINGS=""
.else
CONFIGURE_ARGS+=	--with-python2=no
PLIST_SUB+=		PY_BINDINGS="@comment "
.endif

.if ${PORT_OPTIONS:MRDF}
LIB_DEPENDS+=		raptor:${PORTSDIR}/textproc/raptor
CONFIGURE_ARGS+=	--enable-rdf=yes
.else
CONFIGURE_ARGS+=	--enable-rdf=no
.endif

.if ${PORT_OPTIONS:MTESTING}
.if ! ${PORT_OPTIONS:MPY_BINDINGS} || ! ${PORT_OPTIONS:MPL_BINDINGS}
BROKEN=		Please enable all bindings
.endif
CONFIGURE_ARGS+=	--enable-testing=yes
PLIST_SUB+=		TESTING=""
.else
CONFIGURE_ARGS+=	--enable-testing=no
PLIST_SUB+=		TESTING="@comment "
.endif

.if ${PORT_OPTIONS:MVALGRIND}
BUILD_DEPENDS+=		valgrind:${PORTSDIR}/devel/valgrind
CONFIGURE_ARGS+=	--with-valgrind=yes
.else
CONFIGURE_ARGS+=	--with-valgrind=no
.endif

.if ${PORT_OPTIONS:MHASH_MD5}
CONFIGURE_ARGS+=	--with-password-backend=MD5
.endif

.if ${PORT_OPTIONS:MHASH_SHA1}
CONFIGURE_ARGS+=	--with-password-backend=SHA1
.endif

.if ${PORT_OPTIONS:MHASH_RIPE}
CONFIGURE_ARGS+=	--with-password-backend=RIPEMD160
.endif

.if ${PORT_OPTIONS:MHASH_SHA224}
CONFIGURE_ARGS+=	--with-password-backend=SHA224
.endif

.if ${PORT_OPTIONS:MHASH_SHA256}
CONFIGURE_ARGS+=	--with-password-backend=SHA256
.endif

.if ${PORT_OPTIONS:MHASH_SHA384}
CONFIGURE_ARGS+=	--with-password-backend=SHA384
.endif

.if ${PORT_OPTIONS:MHASH_SHA512}
CONFIGURE_ARGS+=	--with-password-backend=SHA512
.endif

.include <bsd.port.mk>
