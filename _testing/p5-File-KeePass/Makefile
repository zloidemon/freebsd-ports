# New ports collection makefile for:	p5-File-KeePass
# Date created:		2011-09-12
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	File-KeePass
PORTVERSION=	0.03
CATEGORIES=	security
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Interface to KeePass V1 database files

RUN_DEPENDS=	${SITE_PERL}/Crypt/Rijndael.pm:${PORTSDIR}/security/p5-Crypt-Rijndael

USE_PERL5=	yes
PERL_CONFIGURE=	yes

PLIST_FILES=	%%SITE_PERL%%/%%PERL_ARCH%%/auto/File/KeePass/.packlist \
		%%SITE_PERL%%/File/KeePass.pm

MAN3=		File::KeePass.3

.include <bsd.port.mk>
