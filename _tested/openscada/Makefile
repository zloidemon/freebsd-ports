# New ports collection makefile for:	openscada
# Date created:		2011-03-28
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	openscada
PORTVERSION=	0.7.0.2
CATEGORIES=	cad
MASTER_SITES=	ftp://oscada.org/OpenSCADA/0.7.0/

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Open supervisory control and data acquisition project

LICENSE=	GPLv2
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	CPPFLAGS="-I${LOCALBASE}/include -I${LOCALBASE}/include/qt4" \
		LDFLAGS="-L${LOCALBASE}/lib" \
		--with-qt4-dir=${LOCALBASE}/qt4 \
		--with-firebird=no \
		--disable-PostgreSQL \
		--disable-FireBird \
		--disable-System \
		--disable-Siemens \
		--disable-SoundCard \
		--disable-Serial \
		--disable-DiamondBoards \
		--disable-DCON \
		--disable-ICP_DAS \
		--disable-SystemTests

.include <bsd.port.pre.mk>
.include <bsd.port.post.mk>
