# New ports collection makefile for:	xyzcmd
# Date created:		2010-01-18
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD: ports/misc/xyzcmd/Makefile,v 1.2 2010/01/20 06:04:44 amdmi3 Exp $
#

PORTNAME=	xyzcmd
PORTVERSION=	0.0.3
CATEGORIES=	misc python
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Pure console visual file manager

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/urwid/raw_display.py:${PORTSDIR}/devel/py-urwid
RUN_DEPENDS=	${PYTHON_SITELIBDIR}/urwid/raw_display.py:${PORTSDIR}/devel/py-urwid

USE_BZIP2=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=yes
INSTALLS_EGGINFO=yes

.include <bsd.port.mk>
