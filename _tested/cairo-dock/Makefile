# New ports collection makefile for:	cairo-dock
# Date created:		2010-03-18
# Whom:			Ivan Klymenko <fidaj@ukr.net>
#
# $FreeBSD: ports/deskutils/cairo-dock/Makefile,v 1.1 2010/03/21 12:59:40 miwi Exp $
#

PORTNAME=	cairo-dock
DISTVERSION=	2.1.3
CATEGORIES=	deskutils
MASTER_SITES=	http://launchpadlibrarian.net/40820342/
DISTNAME=	${PORTNAME}-${PORTVERSION}-7

MAINTAINER=	fidaj@ukr.net
COMMENT=	Cairo-Dock is a light and eye-candy dock

LIB_DEPENDS=	dbus-glib-1.2:${PORTSDIR}/devel/dbus-glib \
		gtkglext-x11-1.0.0:${PORTSDIR}/x11-toolkits/gtkglext

GNU_CONFIGURE=	yes
USE_GETTEXT=	yes
USE_GMAKE=	yes
USE_GNOME=	gnomehack pkgconfig glib20 gtk20 librsvg2 libxml2
USE_LDCONFIG=	yes
USE_XORG=	xrender

OPTIONS=	EXTRA "Enable extra plugins" off \
		GLITZ "Turn on hardware acceleration through Glitz" off

.include <bsd.port.pre.mk>

.if !defined(WITHOUT_EXTRA)
RUN_DEPENDS+=	${LOCALBASE}/lib/cairo-dock/libcd-Animated-icons.so:${PORTSDIR}/deskutils/cairo-dock-plugins
.endif

.if !defined(WITHOUT_GLITZ)
LIB_DEPENDS+=	glitz.1:${PORTSDIR}/graphics/glitz
CONFIGURE_ARGS+=--enable-glitz
.endif

.include <bsd.port.post.mk>
