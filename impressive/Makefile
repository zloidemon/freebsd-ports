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
		pdftk:${PORTSDIR}/print/pdftk \
		xdg-open:${PORTSDIR}/devel/xdg-utils \
		mplayer:${PORTSDIR}/multimedia/mplayer

USE_PYTHON=	yes
USE_GHOSTSCRIPT_RUN=	yes
NO_BUILD=	yes
PLIST_FILES=	bin/${PORTNAME}.py \
		share/doc/${PORTNAME}/${PORTNAME}.html \
		share/doc/${PORTNAME}/demo.pdf \
		share/doc/${PORTNAME}/license.txt

PLIST_DIRS=	share/doc/${PORTNAME}

MAN1=		${PORTNAME}.1

WRKSRC=		${WRKDIR}/Impressive-0.10.2

do-install:
	@${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME}.py ${PREFIX}/bin/${PORTNAME}.py
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${MANPREFIX}/man/man1/
	@cd ${WRKSRC} && for i in ${PORTNAME}.html demo.pdf license.txt ; do \
		${INSTALL_DATA} $$i ${DOCSDIR} ; \
	done

.include <bsd.port.mk>
