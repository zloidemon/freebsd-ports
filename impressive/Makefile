# New ports collection makefile for:	impressive
# Date created:		2010-02-10
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	impressive
PORTVERSION=	0.10.2
CATEGORIES=	graphics
MASTER_SITES=	SF/${PORTNAME}/Impressive/${PORTVERSION}/
DISTNAME=	Impressive-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	The stylish way of giving presentations

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/OpenGL/wrapper.py:${PORTSDIR}/graphics/py-opengl \
		${PYTHON_SITELIBDIR}/pygame/surfarray.py:${PORTSDIR}/devel/py-game \
		${PYTHON_SITELIBDIR}/PIL/ImageGL.py:${PORTSDIR}/graphics/py-imaging \
		xpdf:${PORTSDIR}/graphics/xpdf \
		gs:${PORTSDIR}/print/ghostscript8 \
		pdftk:${PORTSDIR}/print/pdftk \
		xdg-open:${PORTSDIR}/devel/xdg-utils \
		mplayer:${PORTSDIR}/multimedia/mplayer

USE_PYTHON=	yes

.include <bsd.port.pre.mk>
.include <bsd.port.post.mk>
