# New ports collection makefile for:	leechcraft
# Date created:		2010-07-20
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	leechcraft
PORTVERSION=	0.4.75
CATEGORIES=	misc
MASTER_SITES=	SF/${PORTNAME}/LeechCraft/snapshots/
DISTNAME=	${PORTNAME}-${PORTVERSION}_rc${LC_DATE}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Cross-platform modular internet-client

LICENSE=	GPLv3

LC_DATE=	20110329
INSTALLS_ICONS=	yes
USE_LDCONFIG=	yes
USE_BZIP2=	yes
USE_CMAKE=	yes
USE_QT_VER=	4
USE_GCC=	4.2+
QT_COMPONENTS=	corelib gui network script sql sql-sqlite3 xml
CMAKE_ARGS+=	-DQJSON_LIBRARIES=/usr/local/lib/libqjson.so.0

OPTIONS=	SUMMARY "shows a handy summary of the stuff going on" on \
		TORRENT "BitTorrent client" on \
		AGGREGATOR "RSS/Atom feed reader" on \
		POSHUKU "WWW Browser" off \
		HTTP "HTTP implementation" on \
		LMP "LeechCraft Media Previewer" on \
		DBUSMANAGER "D-Bus support for the LeechCraft" on \
		DEADLYRICS "client for the lyricwiki.org site" on \
		SEEKTHRU "client for the OpenSearch-aware(dont work)" off\
		NETWORKMONITOR "monitor for HTTP requests" on \
		HISTORYHOLDER "keeper of the history" on \
		NEWLIFE "settings importer" on \
		ANHERO "crash handler" on \
		VGRABBER "vkontakte.ru music/video getter" on \
		KINOTIFY "fancy kinetic notifications" on \
		AUSCRIE "auto screenshooter" on \
		TABPP "enhanced tab manager" on \
		AZOTH "IM client (devel)" off \
		SECMAN "security & personal data manager (devel)" off \
		QROSP "scripting support plugin (devel)" off \
		POPISHU "scripting support plugin (devel)" off \
		LACKMAN "package manager for LeechCraft (devel)" off

WRKSRC=		${WRKDIR}/${DISTNAME}/src

.include <bsd.port.pre.mk>

.if defined(WITHOUT_SUMMARY)
CMAKE_ARGS+=	-DENABLE_SUMMARY=OFF
PLIST_SUB+=	SUMMARY="@comment "
.else
PLIST_SUB+=	SUMMARY=""
.endif

.if defined(WITHOUT_TORRENT)
CMAKE_ARGS+=	-DENABLE_TORRENT=OFF
PLIST_SUB+=	TORRENT="@comment "
.else
PLIST_SUB+=	TORRENT=""
LIB_DEPENDS+=	torrent-rasterbar.6:${PORTSDIR}/net-p2p/libtorrent-rasterbar-15
.endif

.if defined(WITHOUT_AGGREGATOR)
CMAKE_ARGS+=	-DENABLE_AGGREGATOR=OFF
PLIST_SUB+=	AGGREGATOR="@comment "
.else
PLIST_SUB+=	AGGREGATOR=""
.endif

.if defined(WITHOUT_POSHUKU)
CMAKE_ARGS+=	-DENABLE_POSHUKU=OFF
PLIST_SUB+=	POSHUKU="@comment "
.else
PLIST_SUB+=	POSHUKU=""
QT_COMPONENTS+=	webkit
.endif

.if defined(WITHOUT_HTTP)
CMAKE_ARGS+=	-DENABLE_HTTP=OFF
PLIST_SUB+=	HTTP="@comment "
.else
PLIST_SUB+=	HTTP=""
.endif

.if defined(WITHOUT_LMP)
CMAKE_ARGS+=	-DENABLE_LMP=OFF
PLIST_SUB+=	LMP="@comment "
.else
PLIST_SUB+=	LMP=""
QT_COMPONENTS+=	phonon
.endif

.if defined(WITHOUT_DBUSMANAGER)
CMAKE_ARGS+=	-DENABLE_DBUSMANAGER=OFF
PLIST_SUB+=	DBUSMANAGER="@comment "
.else
PLIST_SUB+=	DBUSMANAGER=""
QT_COMPONENTS+=	dbus
.endif

.if defined(WITHOUT_DEADLYRICS)
CMAKE_ARGS+=	-DENABLE_DEADLYRICS=OFF
PLIST_SUB+=	DEADLYRICS="@comment "
.else
PLIST_SUB+=	DEADLYRICS=""
.endif

.if defined(WITHOUT_SEEKTHRU)
CMAKE_ARGS+=	-DENABLE_SEEKTHRU=OFF
PLIST_SUB+=	SEEKTHRU="@comment "
.else
PLIST_SUB+=	SEEKTHRU=""
CPPFLAGS+=	-fvisibility-hidden
CMAKE_ARGS+=	-DCMAKE_CXX_FLAGS:STRING="${CXXFLAGS}"
.endif

.if defined(WITHOUT_NETWORKMONITOR)
CMAKE_ARGS+=	-DENABLE_NETWORKMONITOR=OFF
PLIST_SUB+=	NETWORKMONITOR="@comment "
.else
PLIST_SUB+=	NETWORKMONITOR=""
.endif

.if defined(WITHOUT_HISTORYHOLDER)
CMAKE_ARGS+=	-DENABLE_HISTORYHOLDER=OFF
PLIST_SUB+=	HISTORYHOLDER="@comment "
.else
PLIST_SUB+=	HISTORYHOLDER=""
.endif

.if defined(WITHOUT_NEWLIFE)
CMAKE_ARGS+=	-DENABLE_NEWLIFE=OFF
PLIST_SUB+=	NEWLIFE="@comment "
.else
PLIST_SUB+=	NEWLIFE=""
.endif

.if defined(WITHOUT_ANHERO)
CMAKE_ARGS+=	-DENABLE_ANHERO=OFF
PLIST_SUB+=	ANHERO="@comment "
.else
PLIST_SUB+=	ANHERO=""
.endif

.if defined(WITHOUT_VGRABBER)
CMAKE_ARGS+=	-DENABLE_VGRABBER=OFF
PLIST_SUB+=	VGRABBER="@comment "
.else
PLIST_SUB+=	VGRABBER=""
.endif

.if defined(WITHOUT_KINOTIFY)
CMAKE_ARGS+=	-DENABLE_KINOTIFY=OFF
PLIST_SUB+=	KINOTIFY="@comment "
.else
PLIST_SUB+=	KINOTIFY=""
.endif

.if defined(WITHOUT_AUSCRIE)
CMAKE_ARGS+=	-DENABLE_AUSCRIE=OFF
PLIST_SUB+=	AUSCRIE="@comment "
.else
PLIST_SUB+=	AUSCRIE=""
.endif

.if defined(WITHOUT_TABPP)
CMAKE_ARGS+=	-DENABLE_TABPP=OFF
PLIST_SUB+=	TABPP="@comment "
.else
PLIST_SUB+=	TABPP=""
.endif

.if defined(WITHOUT_AZOTH)
PLIST_SUB+=	AZOTH="@comment "
.else
CMAKE_ARGS+=	-DENABLE_AZOTH=ON
PLIST_SUB+=	AZOTH=""
.endif

.if defined(WITHOUT_SECMAN)
PLIST_SUB+=	SECMAN="@comment "
.else
CMAKE_ARGS+=	-DENABLE_SECMAN=ON
PLIST_SUB+=	SECMAN=""
.endif

.if defined(WITHOUT_QROSP)
PLIST_SUB+=	QROSP="@comment "
.else
CMAKE_ARGS+=	-DENABLE_QROSP=ON
PLIST_SUB+=	QROSP=""
IGNORE=		sorry does not work now
.endif

.if defined(WITHOUT_POPISHU)
PLIST_SUB+=	POPISHU="@comment "
.else
CMAKE_ARGS+=	-DENABLE_POPISHU=ON
PLIST_SUB+=	POPISHU=""
.endif

.if defined(WITHOUT_LACKMAN)
PLIST_SUB+=	LACKMAN="@comment "
.else
CMAKE_ARGS+=	-DENABLE_LACKMAN=ON
PLIST_SUB+=	LACKMAN=""
.endif

#post-patch:
#	${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|g' \
#		${WRKSRC}/plugins/poshuku/plugins/onlinebookmarks/CMakeLists.txt

.include <bsd.port.post.mk>
