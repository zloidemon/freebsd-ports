# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD: head/www/p5-Catalyst-Model-Tarantool/Makefile 321083 2013-06-17 03:08:41Z az $

PORTNAME=	Catalyst-Model-Tarantool
PORTVERSION=	0.0.1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION}-1

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Tarantool interface for Catalyst based application

BUILD_DEPENDS=	p5-Catalyst-Runtime>=5.90001:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-MR-Tarantool>=0.0.24:${PORTSDIR}/databases/p5-MR-Tarantool
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

MAN3=		Catalyst::Model::Tarantool.3

.include <bsd.port.mk>
