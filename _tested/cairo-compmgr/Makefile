# New ports collection makefile for:	cairo-compmgr
# Date created:		2010-03-22
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	cairo-compmgr
PORTVERSION=	0.3.0
CATEGORIES=	x11-wm
MASTER_SITES=	http://download.tuxfamily.org/ccm/cairo-compmgr/
DISTNAME=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Cairo Composite Manager

BUILD_DEPENDS=	xcompmgr:${PORTSDIR}/x11-wm/xcompmgr \
		valac:${PORTSDIR}/lang/vala

USE_XORG=	xdamage xext xi sm pixman
USE_GNOME=	gtk20 gnomelibs
GNU_CONFIGURE=	yes
USE_GMAKE=	yes

.include <bsd.port.pre.mk>
.include <bsd.port.post.mk>
