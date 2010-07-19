# New ports collection makefile for:	dmg2img
# Date created:		2009-11-27
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD: ports/sysutils/dmg2img/Makefile,v 1.1 2010/01/27 01:12:10 miwi Exp $
#

PORTNAME=	dmg2img
PORTVERSION=	1.6.2
CATEGORIES=	sysutils
MASTER_SITES=	http://fbsd.zlonet.ru/distfiles/ \
		http://tourservice.kz/zloidemon/distfiles/ \
		http://z-up.ru/zloidemon/distfiles/
DISTNAME=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	DMG2IMG convert tool

PLIST_FILES=	bin/${PORTNAME} \
		bin/vfdecrypt

pre-configure:
	${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}/bin|g' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
