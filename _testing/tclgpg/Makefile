# New ports collection makefile for:	tclgpg
# Date created:		2009-11-10
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	tclgpg
PORTVERSION=	1.0
CATEGORIES=	security tcl
MASTER_SITES=	http://fbsd.zlonet.ru/distfiles/
DISTNAME=	${PORTNAME}-r71

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Tcl interface to GNU Privacy Guard

MANN=		gpg.n

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
USE_BZIP2=	yes
USE_GMAKE=	yes
USE_TCL=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}

USE_AUTOTOOLS=	aclocal:19 autoconf:262
ACLOCAL_ARGS=	-I ${LOCALBASE}/share/aclocal

CONFIGURE_ARGS=	--with-tcl=${TCL_LIBDIR} \
		--with-tclinclude=${TCL_INCLUDEDIR} \
		--enable-threads

.include <bsd.port.mk>
