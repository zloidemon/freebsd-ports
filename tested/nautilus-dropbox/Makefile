# New ports collection makefile for:	nautilus-dropbox
# Date created:		2010-02-08
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	nautilus-dropbox
PORTVERSION=	0.6.1
CATEGORIES=	deskutils
MASTER_SITES=	http://linux.dropbox.com/packages/
DISTNAME=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Sync your files online and cross computers

BUILD_DEPENDS=	rst2xml:${PORTSDIR}/textproc/py-docutils

USE_PYTHON=	yes
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
USE_BZIP2=	yes
USE_GNOME=	nautilus2 gtk20 glib20 gnomedocutils
CONFIGURE_ENV=	CPPFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib"
MAN1=		dropbox.1

.include <bsd.port.mk>
