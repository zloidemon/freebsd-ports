# New ports collection makefile for:	cairo-dock
# Date created:		2010-02-04
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	cairo-dock
PORTVERSION=	2.1.2
CATEGORIES=	x11
MASTER_SITES=	http://launchpadlibrarian.net/36753341/
DISTNAME=	${PORTNAME}-${PORTVERSION}-4

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Is a light and eye-candy dock to launch your programs easily

LIB_DEPENDS=	gtkglext-x11-1.0:${PORTSDIR}/x11-toolkits/gtkglext \
		dbus-glib-1.2:${PORTSDIR}/devel/dbus-glib

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USE_GMAKE=	yes
USE_XORG=	xrender
USE_GNOME=	gtk20 glib20 pkgconfig librsvg2 libxml2 gnomehack

OPTIONS=	NLS		"Build with NLS support" on

.include <bsd.port.pre.mk>

.if defined(WITHOUT_NLS)
CONFIGURE_ARGS+=	--disable-nls
PLIST_SUB+=	NLS="@comment "
.else
USE_GETTEXT=	yes
CONFIGURE_ARGS+=	--enable-nls
PLIST_SUB+=	NLS=""
.endif

.include <bsd.port.post.mk>
