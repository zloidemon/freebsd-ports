# New ports collection makefile for:	ispconfig
# Date created:		2009-10-08
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	ispconfig
PORTVERSION=	3.0.2.2
CATEGORIES=	sysutils
MASTER_SITES=	SF/${PORTNAME}/ISPConfig%203/ISPConfig-${PORTVERSION}/
DISTNAME=	ISPConfig-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Hosting control panel

LIB_DEPENDS=	xml2.5:${PORTSDIR}/textproc/libxml2 \
		GraphicsMagick.1:${PORTSDIR}/graphics/GraphicsMagick \
		courier-authlib/authmysql.0:${PORTSDIR}/databases/courier-authlib-mysql

RUN_DEPENDS=	postfix:${PORTSDIR}/mail/postfix \
		maildrop:${PORTSDIR}/mail/maildrop \
		imapd:${PORTSDIR}/mail/courier-imap \
		amavistd:${PORTSDIR}/security/amavisd-new \
		clamd:${PORTSDIR}/security/clamav \
		unzip:${PORTSDIR}/archivers/unzip \
		bzip2:${PORTSDIR}/archivers/bzip2 \
		unrar:${PORTSDIR}/archivers/unrar \
		pure-ftpd:${PORTSDIR}/ftp/pure-ftpd \
		mydns:${PORTSDIR}/dns/mydns \
		webalizer:${PORTSDIR}/www/webalizer \
		www/squirrelmail/data/index.php:${PORTSDIR}/mail/squirrelmail \
		lib/php/20060613/eaccelerator.so:${PORTSDIR}/www/eaccelerator \
		lib/php/20060613/magickwand.so:${PORTSDIR}/graphics/php-magickwand \
		shp2mysql:${PORTSDIR}/graphics/mapserver \
		www/phpMyAdmin/:${PORTSDIR}/databases/phpmyadmin

BUILD_DEPENDS=	${SITE_PERL}/Mail/SpamAssassin.pm:${PORTSDIR}/mail/p5-Mail-SpamAssassin \
		${SITE_PERL}/DateTime/Format/HTTP.pm:${PORTSDIR}/devel/p5-DateTime-Format-HTTP \
		${SITE_PERL}/DateTime/Format/Builder.pm:${PORTSDIR}/devel/p5-DateTime-Format-Builder \
		${SITE_PERL}/LWP.pm:${PORTSDIR}/www/p5-libwww \
		${SITE_PERL}/${PERL_ARCH}/DBD/mysql.pm:${PORTSDIR}/databases/p5-DBD-mysql

WITH_APACHE2=	yes
USE_MYSQL=	yes
USE_PGSQL=	yes
USE_PHP=	gd imap ldap mysql odbc xml xmlrpc mbstring mcrypt mhash mssql snmp soap tidy curl 

WRKSRC=		${WRKDIR}/${PORTNAME}3_install
.include <bsd.port.pre.mk>
.include <bsd.port.post.mk>
