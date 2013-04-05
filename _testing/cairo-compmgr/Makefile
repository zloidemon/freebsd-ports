# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD$

PORTNAME=	cairo-compmgr
PORTVERSION=	0.3.0
CATEGORIES=	x11-wm
MASTER_SITES=	http://download.tuxfamily.org/ccm/cairo-compmgr/
DISTNAME=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Cairo Composite Manager

BUILD_DEPENDS=	xcompmgr:${PORTSDIR}/x11-wm/xcompmgr \
		valac:${PORTSDIR}/lang/vala \
		iberty:${PORTSDIR}/devel/gnulibiberty

USE_XORG=	xdamage xext xi sm pixman
USE_GNOME=	gtk20 gnomelibs
USES=		pathfix
USE_GETTEXT=	yes
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
USE_GCC=	4.6+
USE_GMAKE=	yes
CONFIGURE_ARGS=	--prefix=${PREFIX} --datadir=${PREFIX}/share \
		CPPFLAGS="-I${LOCALBASE}/include -I${LOCALBASE}/include/libiberty" \
		LDFLAGS="-L${LOCALBASE}/lib" LIBS="-lexecinfo"

MAN1=		cairo-compmgr.1

.include <bsd.port.pre.mk>
.include <bsd.port.post.mk>
