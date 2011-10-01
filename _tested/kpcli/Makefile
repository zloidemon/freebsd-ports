# New ports collection makefile for:	kpcli
# Date created:		2011-09-12
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	kpcli
PORTVERSION=	1.1
CATEGORIES=	security
MASTER_SITES=	SF/${PORTNAME}/
DISTFILES=	${PORTNAME}-${PORTVERSION}.pl

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	KeePass Command Line Interface (CLI)

RUN_DEPENDS=	${SITE_PERL}/File/KeePass.pm:${PORTSDIR}/security/p5-File-KeePass \
		${SITE_PERL}/Term/ReadLine/Gnu.pm:${PORTSDIR}/devel/p5-ReadLine-Gnu

NO_BUILD=	yes
NO_EXTRACT=	yes

PLIST_FILE=	bin/${DISTFILES}

.include <bsd.port.mk>
