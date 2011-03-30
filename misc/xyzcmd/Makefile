# New ports collection makefile for:	xyzcmd
# Date created:		2010-01-18
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD: ports/misc/xyzcmd/Makefile,v 1.3 2010/05/09 08:15:37 miwi Exp $
#

PORTNAME=	xyzcmd
PORTVERSION=	0.0.5
CATEGORIES=	misc python
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Pure console visual file manager

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/urwid/raw_display.py:${PORTSDIR}/devel/py-urwid
RUN_DEPENDS=	${PYTHON_SITELIBDIR}/urwid/raw_display.py:${PORTSDIR}/devel/py-urwid

LICENSE=	GPLv3

USE_BZIP2=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=yes
INSTALLS_EGGINFO=yes

MAN1=		xyzcmd.1

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC}/doc && ${COPYTREE_SHARE} api ${DOCSDIR} && \
		${COPYTREE_SHARE} user-manual ${DOCSDIR} && \
		${INSTALL_DATA} ../ChangeLog overview.pdf ${DOCSDIR}
.endif
	${INSTALL_MAN} ${WRKSRC}/doc/${PORTNAME}.1 ${MANPREFIX}/man/man1/

.include <bsd.port.mk>
